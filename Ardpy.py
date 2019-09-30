import serial                                                              #Serial imported for Serial communication
import time                                                                #Required to use delay functions
ArduinoUnoSerial = serial.Serial('com3',9600)       #Create Serial port object called ArduinoUnoSerialData - com depends on where is your arduno connected
print ("You have new message from Arduino")
while 1:

       #Do this forever
     var = input()                                          #get input from user
     if (var == '1'):                                                #if the value is 1
         ArduinoUnoSerial.write(b'1')                      #send 1 to the arduino's variable - b is to send it in bytes or it wont work!!
         print ("LED turned ON")
         time.sleep(1)
     if (var == '0'): #if the value is 0
         ArduinoUnoSerial.write(b'0')            #send 0 to the arduino's Data variable - b is to send it in bytes or it wont work!!
         print ("LED turned OFF")
         time.sleep(1)
     if (var == 'fine and you'): #if the answer is (fine and you)
         ArduinoUnoSerial.write(b'0') #send 0    to the arduino's Data code
         print ("I'm fine too,Are you Ready to !!!")
         print ("Type 1 to turn ON LED and 0 to turn OFF LED")
         time.sleep(1)
