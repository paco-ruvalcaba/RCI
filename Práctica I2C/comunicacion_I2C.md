# Escritura
```json
{signal: [
  {name: 'SCL',      wave: '1|.n............................................h.'},
  {name: 'SDA',      wave: '1|0333333328444444448555555558444444448555555558l1',data:['1','0','1','0','0','1','1','0','0','1','0','1','0','1','0','1','0','0','1','0','1','0','1','0','1','0','0','1','0','1','0','1','0','1','0','0','1','0','1','0','1','0','1','0','0']},
  {name: 'Etiquetas',wave: '0|23......284.......85.......84.......85.......82.',data:['Inicio','direccion de 7 bits','R/W','ACK','No. de registro a modificar','Ack','Dato','ACK','Registro n+1','ACK','Dato','ACK','Paro']},
],
  head:{
   text:'Excribir/configurar un esclavo'
 },
 foot:{
 text:' '
}
}
```
![escritura_I2C](https://github.com/user-attachments/assets/034d8fb8-eade-4edc-8860-f17969edb093)

# Lectura

```json
{signal: [
  {name: 'SCL',      wave: '1|.n..................hnnnnnnnnnnnnnnnnnnnh..'},
  {name: 'SDA',      wave: '1|033333332844444444810333333332855555555801.',data:['1','0','1','0','0','1','1','0','0','1','0','1','0','1','0','1','0','0','1','0','1','0','1','0','1','0','1','0','1','0','1','0','1','0','1','0','1']},
  {name: 'Etiquetas',wave: '0|23......284.......82.3.......285.......82.l',data:['Inicio','direccion de 7 bits','R/W','ACK','No. de registro a leer','Ack','Inicio','Dirección esclavo','W','ACK','Dato','ACK','Paro']},
],
  head:{
   text:'Leer de un esclavo'
 },
 foot:{
 text:' '
}
}
```
![lectura_I2C](https://github.com/user-attachments/assets/caa06480-0c2e-45ff-8d02-7cc353ce84cd)
