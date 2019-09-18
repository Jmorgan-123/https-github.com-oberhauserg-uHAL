[![Actions Status](https://github.com/oberhauserg/uHAL/workflows/Build/badge.svg)](https://github.com/oberhauserg/uHAL/actions)
[![Actions Status](https://github.com/oberhauserg/uHAL/workflows/CI/badge.svg)](https://github.com/oberhauserg/uHAL/actions)
# uHAL
uHAL (micro Hardware Abstraction Library), is a lightweight HAL library that is designed to be easily ported to any hardware.

## Why

In recent history we have seen a fairly significant boom in technological innovation and a far greater access to technological resources.
Mostly, we have seen a large attraction towards web technologies, because they are easy to get started in. A huge number of people are now able to create websites and apps with ease. In embedded software fields, however, this isn't so much the case. Many people still view low level software as a form of arcane magic. Products such as Arduino and Raspberry Pi have tried to attack this problem, however they are viewed as hobbiest and development tools, and rightly so. 

Many hardware vendors also create their own HAL libraries for their chips, however this only solves a small part of the problem. These HAL libraries can only be used with the hardware manufacture's hardware, and porting over to other hardware is an absolute nightmare. Many of these libraries are extremely bloated and require relatively complex function calls to achieve simple goals.

uHAL aims to achieve a couple key goals: 
* Small footprint and efficient
* Standard API across different devices and device manufactures
* Great software standards that can stand up to a production environment.

## How to use.

