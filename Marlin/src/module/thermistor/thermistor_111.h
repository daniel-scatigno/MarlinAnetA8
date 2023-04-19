/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
const short temptable_111[][2] PROGMEM = {
{  OV  ( 12  ) , 300 } ,
{ OV  ( 13  ) , 295 } ,
{ OV  ( 15  ) , 290 } ,
{ OV  ( 15  ) , 285 } ,
{ OV  ( 17  ) , 280 } ,
{ OV  ( 19  ) , 275 } ,
{ OV  ( 20  ) , 270 } ,
{ OV  ( 22  ) , 265 } ,
{ OV  ( 24  ) , 260 } ,
{ OV  ( 26  ) , 255 } ,
{ OV  ( 29  ) , 250 } ,
{ OV  ( 32  ) , 245 } ,
{ OV  ( 35  ) , 240 } ,
{ OV  ( 39  ) , 235 } ,
{ OV  ( 43  ) , 230 } ,
{ OV  ( 47  ) , 225 } ,
{ OV  ( 52  ) , 220 } ,
{ OV  ( 57  ) , 215 } ,
{ OV  ( 63  ) , 210 } ,
{ OV  ( 69  ) , 205 } ,
{ OV  ( 77  ) , 200 } ,
{ OV  ( 85  ) , 195 } ,
{ OV  ( 94  ) , 190 } ,
{ OV  ( 104 ) , 185 } ,
{ OV  ( 115 ) , 180 } ,
{ OV  ( 128 ) , 175 } ,
{ OV  ( 142 ) , 170 } ,
{ OV  ( 157 ) , 165 } ,
{ OV  ( 174 ) , 160 } ,
{ OV  ( 192 ) , 155 } ,
{ OV  ( 213 ) , 150 } ,
{ OV  ( 235 ) , 145 } ,
{ OV  ( 260 ) , 140 } ,
{ OV  ( 286 ) , 135 } ,
{ OV  ( 315 ) , 130 } ,
{ OV  ( 345 ) , 125 } ,
{ OV  ( 378 ) , 120 } ,
{ OV  ( 412 ) , 115 } ,
{ OV  ( 448 ) , 110 } ,
{ OV  ( 485 ) , 105 } ,
{ OV  ( 524 ) , 100 } ,
{ OV  ( 562 ) , 95  } ,
{ OV  ( 601 ) , 90  } ,
{ OV  ( 641 ) , 85  } ,
{ OV  ( 680 ) , 80  } ,
{ OV  ( 717 ) , 75  } ,
{ OV  ( 754 ) , 70  } ,
{ OV  ( 789 ) , 65  } ,
{ OV  ( 822 ) , 60  } ,
{ OV  ( 853 ) , 55  } ,
{ OV  ( 883 ) , 50  } ,
{ OV  ( 908 ) , 45  } ,
{ OV  ( 930 ) , 40  } ,
{ OV  ( 949 ) , 35  } ,
{ OV  ( 964 ) , 30  } ,
{ OV  ( 977 ) , 25  } ,
{ OV  ( 985 ) , 20  } ,
{ OV  ( 993 ) , 15  } ,
{ OV  ( 999 ) , 10  } ,
{ OV  ( 1004  ) , 5 } ,
{ OV  ( 1008  ) , 0 } 


};
