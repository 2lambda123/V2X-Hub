SHOW STATUS WHERE Variable_name = 'Uptime' and Value > 0;
-- CREATE DATABASE IF NOT EXISTS IVP; 
-- GRANT ALL PRIVILEGES ON IVP.* To 'IVP'@'localhost' IDENTIFIED BY 'ivpx1';
-- GRANT ALL PRIVILEGES ON IVP.* To 'IVP'@'%' IDENTIFIED BY 'ivpx1';

-- phpMyAdmin SQL Dump
-- version 3.4.10.1deb1
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Aug 09, 2014 at 11:38 PM
-- Server version: 5.5.38
-- PHP Version: 5.3.10-1ubuntu3.13

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";
SET time_zone="+00:00";

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `IVP`
--
CREATE DATABASE IF NOT EXISTS `IVP`;
ALTER DATABASE `IVP` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `IVP`;

-- --------------------------------------------------------

--
-- Table structure for table `eventLog`
--

CREATE TABLE IF NOT EXISTS `eventLog` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Primary key',
  `description` text NOT NULL COMMENT 'The log message content',
  `source` text NOT NULL COMMENT 'The name of the plugin or other agent that logged the event',
  `timestamp` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT 'The date and time of the event in UTC',
  `logLevel` enum('Debug','Info','Warning','Error','Fatal') NOT NULL COMMENT 'The type of event being logged, one of   	- Debug 	- Info 	- Warn 	- Error',
  `uploaded` tinyint(1) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 COMMENT='This table records events generated by every IVP core component and plugin in the IVP platform.  ' AUTO_INCREMENT=1189 ;

-- --------------------------------------------------------

--
-- Table structure for table `plugin`
--

CREATE TABLE IF NOT EXISTS `plugin` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Primary key',
  `name` varchar(100) NOT NULL COMMENT 'A unique plugin name',
  `description` text,
  `version` text,
  PRIMARY KEY (`id`),
  UNIQUE KEY `name` (`name`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 COMMENT='This table lists the plugins loaded and available to run on the IVP platform.' AUTO_INCREMENT=435 ;

-- --------------------------------------------------------

--
-- Table structure for table `installedPlugin`
--

CREATE TABLE IF NOT EXISTS `installedPlugin` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `pluginId` int(10) unsigned NOT NULL,
  `path` text NOT NULL,
  `exeName` text NOT NULL,
  `manifestName` text NOT NULL,
  `commandLineParameters` text NOT NULL,
  `enabled` tinyint(1) NOT NULL,
  `maxMessageInterval` int(10) unsigned NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `pluginId` (`pluginId`),
  CONSTRAINT `installedPlugin_ibfk_2` FOREIGN KEY (`pluginId`) REFERENCES `plugin` (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=3 ;

-- --------------------------------------------------------

--
-- Table structure for table `messageType`
--

CREATE TABLE IF NOT EXISTS `messageType` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Primary key',
  `type` varchar(50) NOT NULL COMMENT 'A unique message type name',
  `subtype` varchar(50) NOT NULL,
  `description` text COMMENT 'A description of the message type',
  PRIMARY KEY (`id`),
  UNIQUE KEY `type` (`type`,`subtype`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 COMMENT='This table lists the valid message types of every plugin loaded on the IVP platform.' AUTO_INCREMENT=695 ;

-- --------------------------------------------------------

--
-- Table structure for table `messageActivity`
--

CREATE TABLE IF NOT EXISTS `messageActivity` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Primary key',
  `messageTypeId` int(10) unsigned NOT NULL COMMENT 'Foreign key into the messageType table',
  `pluginId` int(10) unsigned NOT NULL,
  `count` int(10) unsigned NOT NULL,
  `lastReceivedTimestamp` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT 'The date and time of the most recent message of a type in UTC.',
  `averageInterval` int(10) unsigned NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `messageTypeId_pluginId` (`messageTypeId`,`pluginId`),
  KEY `messageTypeId` (`messageTypeId`),
  KEY `pluginId` (`pluginId`),
  CONSTRAINT `messageActivity_ibfk_1` FOREIGN KEY (`messageTypeId`) REFERENCES `messageType` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `messageActivity_ibfk_2` FOREIGN KEY (`pluginId`) REFERENCES `plugin` (`id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 COMMENT='This table records the most recent message activity of each active plugin in the IVP system. The data in this table is updated by the IVP plugin monitor core component for every message the plugin monitor receives.' AUTO_INCREMENT=31397 ;

-- --------------------------------------------------------

--
-- Table structure for table `pluginActivity`
--

CREATE TABLE IF NOT EXISTS `pluginActivity` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Primary key',
  `msgReceivedTimestamp` bigint(20) unsigned NOT NULL COMMENT 'Timestamp in microseconds since Epoch of when message was received by destination Plugin',
  `rPluginName` varchar(100) NOT NULL COMMENT 'Name of receiving plugin',
  `sPluginName` varchar(100) NOT NULL COMMENT 'Name of source plugin',
  `msgType` varchar(100) NOT NULL COMMENT 'Type of message',
  `msgSubtype` varchar(100) NOT NULL COMMENT 'Subtype of message',
  `msgCreatedTimestamp` bigint(20) NOT NULL COMMENT 'Timestamp in milliseconds since Epoch of when message was created.',
  `msgHandledTimestamp` bigint(20) NOT NULL COMMENT 'Timestamp in milliseconds since Epoch of when receiving plugin finished handling message.',
  `origMsgTimestamp` bigint(20) NOT NULL COMMENT 'Timestamp in milliseconds since Epoch of the original message that triggered this message sequence.',
  PRIMARY KEY (`id`),
  UNIQUE KEY `msgReceivedTimestamp_rPluginName` (`msgReceivedTimestamp`,`rPluginName`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 COMMENT='This table records all message activity of each active plugin in the IVP system. The data in this table is updated by each Plugin as part of PluginClient base class implementation.' ;

-- --------------------------------------------------------

--
-- Table structure for table `pluginConfigurationParameter`
--

CREATE TABLE IF NOT EXISTS `pluginConfigurationParameter` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Primary key',
  `pluginId` int(10) unsigned NOT NULL,
  `key` varchar(255) NOT NULL COMMENT 'The name of a configuration parameter.',
  `value` text NOT NULL COMMENT 'The value of a configuration parameter',
  `defaultValue` text NOT NULL,
  `description` text NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `pluginId_key` (`pluginId`,`key`),
  KEY `pluginId` (`pluginId`),
  CONSTRAINT `pluginConfigurationParameter_ibfk_1` FOREIGN KEY (`pluginId`) REFERENCES `plugin` (`id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 COMMENT='This table lists the IVP system configuration parameters used by both core components and plugins to control the behavior of the system.' AUTO_INCREMENT=1540 ;

-- --------------------------------------------------------

--
-- Table structure for table `pluginMessageMap`
--

CREATE TABLE IF NOT EXISTS `pluginMessageMap` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Primary key',
  `pluginId` int(10) unsigned NOT NULL COMMENT 'Foreign key into the plugin table',
  `messageTypeId` int(10) unsigned NOT NULL COMMENT 'Foreign key into the messageType table.',
  PRIMARY KEY (`id`),
  UNIQUE KEY `pluginId` (`pluginId`,`messageTypeId`),
  KEY `pluginId_2` (`pluginId`),
  KEY `messageTypeId` (`messageTypeId`),
  CONSTRAINT `pluginMessageMap_ibfk_2` FOREIGN KEY (`messageTypeId`) REFERENCES `messageType` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `pluginMessageMap_ibfk_1` FOREIGN KEY (`pluginId`) REFERENCES `plugin` (`id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 COMMENT='This table identifies the types of messages generated by each plugin.' AUTO_INCREMENT=18172 ;

-- --------------------------------------------------------

--
-- Table structure for table `pluginStatus`
--

CREATE TABLE IF NOT EXISTS `pluginStatus` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `pluginId` int(10) unsigned NOT NULL,
  `key` varchar(100) NOT NULL,
  `value` text NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `UQ_pluginId_key` (`pluginId`,`key`),
  KEY `pluginId` (`pluginId`),
  CONSTRAINT `pluginStatus_ibfk_2` FOREIGN KEY (`pluginId`) REFERENCES `plugin` (`id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=27521 ;

-- --------------------------------------------------------

--
-- Table structure for table `systemConfigurationParameter`
--

CREATE TABLE IF NOT EXISTS `systemConfigurationParameter` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Primary key',
  `key` varchar(255) NOT NULL COMMENT 'The name of a configuration parameter.',
  `value` text NOT NULL COMMENT 'The value of a configuration parameter',
  `defaultValue` text NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `key` (`key`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 COMMENT='This table lists the IVP system configuration parameters used by both core components and plugins to control the behavior of the system.' AUTO_INCREMENT=112 ;

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE IF NOT EXISTS `user` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Primary key',
  `username` varchar(50) NOT NULL COMMENT 'The account name for the user, typically an email address',
  `password` varchar(50) NOT NULL COMMENT 'An encrypted password',
  `accessLevel` int(11) NOT NULL DEFAULT '1' COMMENT 'The access level permitted for this user, one of: \n  	1. read-only access to portal 	2. application administrator access 	3. system administrator, all access',
  PRIMARY KEY (`id`),
  UNIQUE KEY `UQ_user_id` (`id`),
  UNIQUE KEY `UQ_user_username` (`username`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 COMMENT='The list of accounts that can access the IVP platform via the administrative portal is held in the users table.' AUTO_INCREMENT=2 ;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;

INSERT INTO IVP.user (IVP.user.username, IVP.user.password, IVP.user.accessLevel) VALUES('_battelle', 'B@ttelle', 3);
INSERT INTO IVP.user (IVP.user.username, IVP.user.password, IVP.user.accessLevel) VALUES('v2iadmin', 'V2iHub#321', 3);
