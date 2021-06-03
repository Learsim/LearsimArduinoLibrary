# LearsimArduinoLibrary
Library For Learsim Arduino Clients

Serial values are read in the format ``` ID:VALUETYPE:VALUE ```;

### All values are initially string, gets casted
- ID is a 2 char hex value.
- VALUETYPE is a int

| Value         | Datatype      |
| ------------- |:-------------:|
| 0 | int |
| 1 | bool |
| 2 | double |
| 3 | float |
| 4 | string |




- Value is casted to the Data Type of that value