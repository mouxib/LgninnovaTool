@echo off
Libimobiledevice\ideviceinfo.exe | Libimobiledevice\grep.exe -w "ProductVersion" | Libimobiledevice\awk.exe "{print $NF}"