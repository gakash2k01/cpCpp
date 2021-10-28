import pyautogui, time, datetime

time.sleep(30)

for i in range(1000):
	
	# to display the time at which the message is sent
	print(datetime.datetime.now())
	pyautogui.typewrite("Hello bro!!!")
	pyautogui.press("enter")
	print(i)
	# time.sleep(2)

	# print(datetime.datetime.now())

	# pyautogui.typewrite("Reminder: Take medicine!")
	# pyautogui.press("enter")
	# time.sleep(2)

	# print(datetime.datetime.now())

	# pyautogui.typewrite("Reminder: Take the dog for a walk!")
	# pyautogui.press("enter")
	# time.sleep(2)

	# print(datetime.datetime.now())

	# pyautogui.typewrite("Reminder: Drink water!")
	# pyautogui.press("enter")
	# time.sleep(2)

	# print(datetime.datetime.now())

	# pyautogui.typewrite("Reminder: Drink water!")
	# pyautogui.press("enter")
	# time.sleep(2)
