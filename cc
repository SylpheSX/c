#!/data/data/com.termux/files/usr/bin/bash

echo -e "\e[1;45m                                        \e[0m"
echo -e "\e[1;45m         Edit profile                   \e[0m"
echo -e "\e[1;45m                                        \e[0m"
dos2unix ccc
cat ccc >> ../../usr/etc/profile

echo -e "\e[1;42m                                        \e[0m"
echo -e "\e[1;42m         apt update && upgrade          \e[0m"
echo -e "\e[1;42m                                        \e[0m"
cd ..
apt update && apt upgrade

echo -e "\e[1;45m                                        \e[0m"
echo -e "\e[1;45m         Install wget && proot          \e[0m"
echo -e "\e[1;45m                                        \e[0m"
pkg install wget && pkg install proot 

echo -e "\e[1;42m                                        \e[0m"
echo -e "\e[1;42m         Install proot-distro           \e[0m"
echo -e "\e[1;42m                                        \e[0m"
pkg install proot-distro

echo -e "\e[1;45m                                        \e[0m"
echo -e "\e[1;45m             Install Ubuntu             \e[0m"
echo -e "\e[1;45m                                        \e[0m"
proot-distro install ubuntu

echo -e "\e[1;42m                                        \e[0m"
echo -e "\e[1;42m               Start Ubuntu             \e[0m"
echo -e "\e[1;42m                                        \e[0m"
proot-distro login ubuntu


