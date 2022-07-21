# carBot.io
An Arduino based bot that drives in the direction based on the input sent from the Serial Monitor, Of course I wrote it in C/C++ so you dont have to. The Bot connects to your Laptop, PC or phone using a bluetooth module that i could not include in the Circuit Diagram but can be seen in the video (red module)

<h1>Circuit Diagram</h1>

![image](https://user-images.githubusercontent.com/104775954/177681678-00a4e55e-1877-4aa4-9368-580e07336252.png)

<h1>Parts List</h1>

<ul>
<a href="https://store.arduino.cc/collections/boards/products/arduino-uno-rev3"><li>Arduino UNO</li></a>
<a href="https://www.amazon.com/Antrader-Motor-Shaft-Arduino-Smart/dp/B07DDC3ZBK/ref=sr_1_18?keywords=hobby+motors&qid=1657163669&sr=8-18"><li>Motor</li></a>
<a href="https://www.ti.com/product/L293D"><li>L293D(Motor control chip)</li></a>
<a href="https://ie.rs-online.com/web/p/raspberry-pi-hats-add-ons/2222162?cm_mmc=IE-PLA-DS3A-_-google-_-CSS_IE_EN_Raspberry_Pi_%26_Arduino_%26_Development_Tools_Whoop_HI+(2)-_-(IE:Whoop!)+Raspberry+Pi+HATs+%26+Add-ons-_-2222162&matchtype=&aud-827186183886:pla-374265978167&gclid=Cj0KCQjwz96WBhC8ARIsAATR250PCTgGbcgoJ2ihkFlSXFR7ycBskDEKfJhRxz1aEc6x6QFn9z2D_z4aAuBVEALw_wcB&gclsrc=aw.ds">
  <li>Breadboard</li></a>
<a href="https://www.reichelt.com/gb/en/developer-boards-jumper-cable-10cm-3x-20-cables-debo-kabelset9-p280594.html?PROVID=2811"><li>Jumper Cables</li></a>
<a href="https://ie.rs-online.com/web/p/bluetooth-modules/7985359"><li>Bluetooth Module</li></a>
<li>Bot chasis</li>
<li>Wheels(2x)</li>
<a href="https://www.amazon.com/Smart-Chassis-Motors-Encoder-Battery/dp/B01LXY7CM3/ref=sr_1_31?keywords=arduino+car&qid=1657164220&sr=8-31"><li>Full Kit available here(Arduino not Included)</li></a>
</ul>  

<h1>Test Video</h1>
This video shows the car with a echo location sensor attacthed (not relevent to the code uploaded) to avoid collisions, i couldn't find a video with more finess but at least you can see the car move.

https://user-images.githubusercontent.com/104775954/177686940-351e04b7-3898-4514-b2b1-1ec670536ff1.mp4

<h1>TinkerCad</h1>

If you would Like to have a Tinker at the circuit itself click the link below:<br>
https://www.tinkercad.com/things/2noHVlqRNu9 <br>
Note: the TinkerCad edition uses the original version of the code which lacks any current or future libraries 

<h1>Updates</h1>
<h2>16/07/2022</h2>
<p>
Created a motors library to remove the motor code from main file and make the code more high level.
The motor code houses all motor functions and defenitions.
</p>

<h1>Road Map</h1>
<ul>
  <li><s>Create a motor library</s></li>
  <li>Create a USART library</li>
  <li>Create a millis library</li>
  <li>Implement Variable Speed control</li>
  <li>Add Bluetooth Connection</li> 
  <li>Make better controls</li>
  <li>Make updated Circuit Diagram</li> 
  <li>3D model a chassis of bot</li> 
</ul>

<p>A detailed RoadMap can be found under the "projects" Tab</p>
