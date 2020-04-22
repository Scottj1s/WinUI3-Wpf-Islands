setup:
copy a global.json and nuget.config from cswinrt repo

activation will fail due to vcrt forwarders missing TFM netcoreapp5.0 
https://github.com/microsoft/vcrt-forwarders/issues/22
​
workaround by copying the nuget netcoreapp2.0 folder to netcoreapp5.0 in:
%USERPROFILE%\.nuget\packages\microsoft.vcrtforwarders.140\1.0.6\build
