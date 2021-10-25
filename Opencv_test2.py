import cv2
from datetime import datetime

DEV_ID = 0

WIDTH = 640
HEIGHT = 480
FPS = 5

REC_SEC = 10

def main():

    cap = cv2.VideoCapture(DEV_ID)

    cap.set(cv2.CAP_PROP_FRAME_WIDTH, WIDTH)
    cap.set(cv2.CAP_PROP_FRAME_HEIGHT, HEIGHT)
    cap.set(cv2.CAP_PROP_FPS, FPS)

    date = datetime.now().strftime("%Y%m%d_%H%M%S")
    path = "./" +  date + ".mp4"

    fourcc = cv2.VideoWriter_fourcc('m', 'p', '4', 'v')
    out = cv2_VideoWriter(path, fourcc, FPS, (WIDTH, HEIGHT))

    for _ in range(FPS * REC_SEC):
        ret, frame = cap.read()
        out.write(frame)

    cap.release()
    out.release()
    cv2.destroyAllwindows()
    return

if __name__ == "__main__":
    main()
