returnvalue = msgbox("test",1,"test")
msgbox returnvalue

Set objShell = Wscript.CreateObject("Wscript.Shell")
returnvalue = objShell.Popup("Click me Quick!",, "My Popup Dialogue box")
msgbox returnvalue