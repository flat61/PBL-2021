from picamera import PiCamera
from time import sleep

camera = PiCemra()
camera.rotation = 180

camera.start_preview(alpha=200)
sleep(5)
camera.capture('/home/pi/image.jpg')
camera.stop_preview()


