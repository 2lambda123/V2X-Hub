import socket

UDP_IP = "127.0.0.1"
UDP_SOCKET_PORT_SIM_REGISTRATION = 6767

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
sock.bind((UDP_IP, UDP_SOCKET_PORT_SIM_REGISTRATION))
print("Server Listenning on port: %s" % UDP_SOCKET_PORT_SIM_REGISTRATION)

while True:
    data, addr = sock.recvfrom(1024)
    print("recevied message: %s" % data)