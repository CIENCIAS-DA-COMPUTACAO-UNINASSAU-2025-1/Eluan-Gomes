var tempo, distancia;

tempo = 12;
distancia = 6.1;

function tchumgo() {
    var resultado = 5 + (2 * distancia) + (0.5 * tempo);
    return resultado;
}

console.log("Valor estimado pelo TCHUMGO: R$ ",tchumgo());