function verificarNumero() {
	// Obter o número digitado pelo usuário
	let numero = parseInt(document.getElementById("numero").value);
	// Verificar se o número pertence à sequência de Fibonacci
	let a = 0, b = 1, c = 0;
	while (c < numero) {
		c = a + b;
		a = b;
		b = c;
	}
	if (c == numero) {
		document.getElementById("resultado").style.color = "blue";
		document.getElementById("resultado").innerHTML = "O número " + numero + " pertence à sequência de Fibonacci.";
	} else {
		document.getElementById("resultado").style.color = "red";
		document.getElementById("resultado").innerHTML = "O número " + numero + " não pertence à sequência de Fibonacci.";
	}
}
