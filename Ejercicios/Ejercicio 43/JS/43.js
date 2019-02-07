let positivos=0;
let negativos=0;
let numero;

document.write("Ingresa un numero real diferente de 0, (Ingresa 0 para salir).");
numero=prompt();
while (numero!=0){
    if (numero>0){
        positivos++;
    } else {
        negativos++;
    }
    alert("Ingresa otro numero real diferente de 0, (Ingresa 0 para salir).");
    numero=prompt();
}
document.write("Se encontraron ",positivos," numeros positivos");
document.write("Se encontraron ",negativos," numeros negativos");
