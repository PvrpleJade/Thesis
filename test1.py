import serial.tools.list_ports

ports = serial.tools.list_ports.comports()
serialInst =  serial.Serial()

portList = []
    
for onePort in ports:
    portList.append(str(onePort))
    print(str(onePort))

val = input("select Port:  COM")

for x in range(0,len(portList)):
    if portList[x]. startswith("COM" + str(val)):
        portVar = "COM" + str(val)
        print(portList[x])

serialInst.baudrate = 9600
serialInst.port = portVar
serialInst.open()

while True:
    if serialInst.in_waiting:
        packet = serialInst.readline().decode('utf')
        
        numeric_part = packet.split(':')[-1].strip()
        value = float(numeric_part)
        print(value) 

            
