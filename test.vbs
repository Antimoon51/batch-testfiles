Set oShell = CreateObject ("WScript.Shell")
set oExec = oShell.Exec("CMD.EXE /K" &chr(34) &"file.bat" &chr(34))

Set objFileToWrite = CreateObject("Scripting.FileSystemObject").OpenTextFile("test.bat",2,true)
objFileToWrite.WriteLine("CMD.EXE /K" &chr(34) &"file.bat" &chr(34))
objFileToWrite.Close
Set objFileToWrite = Nothing