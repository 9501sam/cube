import logging
import time
import os
from logging.handlers import TimedRotatingFileHandler

os.makedirs("./logs", exist_ok=True)
logging.basicConfig(level=logging.DEBUG)
logname = "./logs/my_app.log"
handler = TimedRotatingFileHandler(logname, when="S", backupCount=5)
handler.setFormatter(logging.Formatter('%(asctime)s %(levelname)s [%(pathname)s:%(lineno)d] %(message)s', datefmt="%Y-%m-%d %H:%M:%S"))

logger = logging.getLogger()
logger.addHandler(handler)

for i in range(300):
    logger.info(f"{i}")
    time.sleep(1)
