![I2C](https://github.com/user-attachments/assets/bb7ca563-fbb5-4079-a569-11fed8daa7c5)

```typogram
                                "Rsistencias Pull-up"
                                       :              
                                       :              
                                       v              
                                                      
                         .-----------/\/\/\----+            
     "datos"             |                      *---|Vcc   
        :                |     .-----/\/\/\----+            
        :                |     |                            
        :                |     |                           
        +~~~~~~~~~~~~~~->|     |<~~~~~~~~~"Señal de reloj" 
                         |     |                            
                         |     |                            
.---------------.        |     |        .---------------.
|               |"SDA"   |     |   "SDA"|               |
| "Dispositivo" |--------*-----|--------| "Dispositivo" |
| "Maestro"     |"SCL"   |     |   "SCL"| "Esclavo #1"  |
|               |--------|-----*--------|               |
'---------------'        |     |        '---------------'
                         |     |
                         |     |
                         |     |        .---------------.
                         |     |   "SDA"|               |
                         *-----|--------| "Dispositivo" |
                         |     |   "SCL"| "Esclavo #2"  |
                         |     *--------|               |
                         |     |        '---------------'
                         :     :
                         :     :
 
                   Hasta 127 dispositvos
                    Esclavos Conectados
```

