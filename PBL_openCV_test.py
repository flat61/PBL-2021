import cv2
from datetime import datetime
def main():
    cam = cv2.VideoCapture(0)

    if not cam.isOpened():
        return
    ret, frame = cam.read()
    date = datetime.now().strftime("%Y5m%d_5H%M5S")
    path = "./usbcam-img/" + date +".png"
    cv2.imwrite(path, frame)
    cam.release()
def _name_():
    if _name_ == '_main_':
        main()
