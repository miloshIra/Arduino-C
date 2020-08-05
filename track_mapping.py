import folium
import datetime
from gps import *
import threading

#--------------- GPS MODULE/FUNCTIONS/VALUES (https://stackoverflow.com/questions/6146131/python-gps-module-reading-latest-gps-data) ------

class Gps(threading.Thread):
    def __init__(self):
        threading.Thread.__init__(self)
        self.session = gps(mode=WATCH_ENABLE)
        self.current_value = None

    def get_current_value(self):
        return self.current_value

    def run(self):
        try:
            while True:
                self.current_value = self.session.next()
                time.sleep(0.2)
        except StopIteration:
            pass



gpsp = Gps()
gpsp.start()
while 1:
    time.sleep(5)
    print(gpsp.get_current_value())

#----------------------------------------------------


map = folium.Map(location=[42.040919, 21.353106])
map.save("Track.html")


class Lap():
    def __init__(self, lap_time, current_time, start_time):
        self.lap_time = lap_time
        self.current_time = current_time
        self.start_time = datetime.datetime.now().strftime("%H:%M:%S")


lap = Lap(123,123,None)

print(lap.start_time)
print(lap.current_time)
print(lap.lap_time)

#MAKE MAP FUNSCITON ---- MAP OBJECT ------ ????



#DRAW ROUTE FUNCTION ---- ROUTE OBJECT ----- ????



#SENSOR/BUTTONS READINGS ------ SENSOR/BUTTONS OBJECTS ------ ????



#VISUALIATION FUNCTIONS---!!!



#MATH STUFF --------------- !!!!!
