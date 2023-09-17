from tkinter import*
from gpiozero import LED
import RPi.GPIO as gpio
import time
gpio.setmode(gpio.BCM)
LED = LED(16)
win = Tk()
l1=Label(win, text= "Enter text") 
l1.grid(row=1, column=1) 
win.geometry("400x150")
win.title("Enter text in Morse code")

def LED_BLINK_CODE(value):
    for alphabet in value:
        if(alphabet=='a'):
            dot_blink()
            dash_blink()
            
        elif(alphabet=='b'):
            dash_blink()
            dot_blink()
            dot_blink() 
            dot_blink()

        elif(alphabet == 'c') :
            dash_blink()
            dot_blink()
            dash_blink()
            dot_blink()

        elif (alphabet == 'd'):
            dash_blink()
            dot_blink()
            dot_blink()

        elif (alphabet == 'e'):
            dot_blink()
        
        elif (alphabet == 'f'):
            dot_blink()
            dot_blink()
            dash_blink()
            dot_blink()
            
        elif (alphabet == 'g'):
            dash_blink()
            dash_blink()
            dot_blink()
            
        elif (alphabet == 'h'):
            dot_blink()
            dot_blink()
            dot_blink()
            dot_blink()
            
        elif (alphabet == 'i'):
            dot_blink()
            dot_blink()
            
        elif (alphabet == 'j'):
            dot_blink()
            dash_blink()
            dash_blink()
            dash_blink()
            
        elif (alphabet == 'k'):
            dash_blink()
            dot_blink()
            dash_blink()
            
        elif (alphabet == 'l'):
            dot_blink()
            dash_blink()
            dot_blink()
            dot_blink()
            
        elif (alphabet == 'm'):
            dash_blink()
            dash_blink()
            
        elif (alphabet == 'n'):
            dash_blink()
            dot_blink()
            
        elif (alphabet == 'o'):
            dash_blink()
            dash_blink()
            dash_blink()
            
        elif (alphabet == 'p'):
            dot_blink()
            dash_blink()
            dash_blink()
            dot_blink()
            
        elif (alphabet == 'q'):
            dash_blink()
            dash_blink()
            dot_blink()
            dash_blink()

        elif (alphabet == 'r'):
            dot_blink()
            dash_blink()
            dot_blink()
            
        elif (alphabet == 's'):
            dot_blink()
            dot_blink()
            dot_blink()
            
        elif (alphabet == 't'):
            dash_blink()
        
        elif (alphabet == 'u'):
            dot_blink()
            dot_blink()
            dash_blink()
            
        elif (alphabet == 'v'):
            dot_blink()
            dot_blink()
            dot_blink()
            dash_blink()
            
        elif (alphabet == 'w'):
            dot_blink()
            dash_blink()
            dash_blink()
            
        elif (alphabet == 'x'):
            dash_blink()
            dot_blink()
            dot_blink()
            dash_blink()
            
        elif (alphabet == 'y'):
            dash_blink()
            dot_blink()
            dash_blink()
            dash_blink()
            
        elif (alphabet == 'z'):
            dash_blink()
            dash_blink()
            dot_blink()
            dot_blink()
    
def dot_blink():
    LED.on()
    time.sleep(0.3)
    LED.off()
    time.sleep(0.3)

def dash_blink():
    LED.on()
    time.sleep(0.9)
    LED.off()
    time.sleep(0.3)
    
def press_enter():
    value=text_box.get("1.0", "end-1c")
    i=1
    for c in value:
        if(i>12):
            break
        print(c, end="")
        LED_BLINK_CODE(value)

    
text_box = Text(win, height=1, width=25, bg='white', font='Arial')
text_box.grid(row=4, column=2, padx=20, pady=12)

    
press = Button(win, text="PRESS_ENTER_KEY", command=press_enter, bg='green3',fg='white', font='Arial', height=2, width = 20)
press.grid(row=1, column=2, padx=12, pady=6)

win.mainloop()