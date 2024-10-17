;--------------------------------------------------------------------------------------
; Arkanoid generated levels from text file - Demo Level                                             
; Converter in Python by Daniel Leon (UFV) for AOC 2024/2025                           
;--------------------------------------------------------------------------------------
; MAP ENCODING:  
;   Byte 0      : Number of destructible bricks                                                                   
;   Variable size lines - for each line:
;       Byte 0        : Y Coordinate for row                                                  
;       Byte 1        : Number of elements in row                                             
;       Bytes 2..n-1  : color of brick  (0..8)                                                
;               color=8 means indestructible brick                                              
;               color=0 means no brick                                                          
;  Last Byte          : Trying to read a line with Y coordinate=255 means end of map                                                  
;--------------------------------------------------------------------------------------


UFVLogo:   
        DEFB 153
        DEFB 3 , 14, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1
        DEFB 4 , 14, 0, 1, 7, 7, 7, 7, 1, 0, 1, 7, 7, 7, 7, 1
        DEFB 5 , 14, 0, 1, 7, 7, 7, 7, 1, 0, 1, 7, 7, 7, 7, 1
        DEFB 6 , 14, 0, 1, 1, 7, 7, 1, 1, 0, 1, 1, 7, 7, 1, 1
        DEFB 7 , 13, 0, 0, 1, 7, 7, 1, 0, 0, 0, 1, 7, 7, 1
        DEFB 8 , 13, 0, 0, 1, 7, 7, 1, 0, 0, 0, 1, 7, 7, 1
        DEFB 9 , 13, 0, 0, 1, 7, 7, 1, 0, 0, 0, 1, 7, 7, 1
        DEFB 10, 13, 0, 0, 1, 7, 7, 1, 0, 0, 0, 1, 7, 7, 1
        DEFB 11, 13, 0, 0, 1, 7, 7, 1, 0, 0, 0, 1, 7, 7, 1
        DEFB 12, 13, 0, 0, 1, 7, 7, 1, 0, 0, 0, 1, 7, 7, 1
        DEFB 13, 13, 0, 0, 1, 7, 7, 1, 0, 0, 0, 1, 7, 7, 1
        DEFB 14, 13, 0, 0, 1, 7, 7, 1, 1, 1, 1, 1, 7, 7, 1
        DEFB 15, 13, 0, 0, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 1
        DEFB 16, 13, 0, 0, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 1
        DEFB 17, 12, 0, 0, 0, 1, 7, 7, 7, 7, 7, 7, 7, 1
        DEFB 18, 11, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1
        DEFB 255