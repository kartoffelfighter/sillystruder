# s - codes

s-codes are commands to operate the sillystruder
s-codes follow the scheme s\[code\] \[argument\]



## implemented s - codes

### S1 extrude [amount/way/steps]

S1 extrudes the given amount/way/steps.
S1 is fed with the arguments in amount [ml] / way [mm] / steps [raw]

Send

* {S1 [n]} while [n] is the amount of extruded material

### S2 go to home

Send 

* {S2} to move the pressure plate to the home position

### S10 set extrude mode [1/2/3]

Send 

* {S10 1} to set extrude mode to amount *default*

* {S10 2} to set extrude mode to way

* {S10 3} to set extrude mode to steps



### S11 set home mode [1/2]

Send

* {S11 1} to set homing mode to "move until hit endstop" *default*

* {S11 2} to set homing mode to "move all made steps in last extrusion back"



### S20 dis-/enable motor

Send

* {S20 0} to disable the stepper *default*
* {S20 1} to enable the stepper

S99 stop

Send 

* {S99} to disable everything and stop ("emergency" stop)







# feature requests

## Pause Mode 

While extruding there should be a pause mode to change the extruded form. 

implementation:

- S-Code for Pause-Mode
- S-Code to reset already done steps
- S-Code to resume (maybe just a different switch for pause-mode)





