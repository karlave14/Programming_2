contenido = "hola, estas escribiendo en un archivo con python"
with open("file2.txt", "w+") as documento:
	documento.write(str(contenido))
	print(contenido)

