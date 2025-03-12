@echo off
Libimobiledevice\ideviceinfo.exe | Libimobiledevice\grep.exe -w "SerialNumber" | Libimobiledevice\awk.exe "{print $NF}"