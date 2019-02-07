let numero;
let suma=0;
let mensaje;
numero= prompt();

for (i=1;i<numero;i++){
    if (numero % i == 0){
        suma=suma+1;
    }
}
if (suma==1){
    mensaje=" Es un numero primo";
} else{
    mensaje=" No es un numero primo";
}
document.write(numero,mensaje);
