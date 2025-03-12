@echo off

Libimobiledevice\ideviceinfo.exe | Libimobiledevice\grep.exe -w ProductType | Libimobiledevice\awk.exe '{printf $NF}'
ECHO ""
PAUSE