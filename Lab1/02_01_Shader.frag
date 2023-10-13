//
// ================================================
// | Grafica pe calculator                        |
// ================================================
// | Laboratorul II - 02_01_Shader.frag |
// ======================================
// 
//  Shaderul de fragment / Fragment shader - afecteaza culoarea pixelilor;
//

#version 330	//  Versiunea GLSL;

//	Variabile de intrare (dinspre Shader.vert);
in vec4 ex_Color;

//	Variabile de iesire	(spre programul principal);
out vec4 out_Color;		//	Culoarea actualizata;

//	Variabilele uniforme;
uniform int codColShader;
uniform float randomRed;
uniform float randomGreen;
uniform float randomBlue;

//	Actualizeaza culoarea in functie de codCol;
void main(void)
  {
	switch ( codColShader )
	{
		case 0: out_Color = ex_Color; break;
		case 1: out_Color = vec4 (1.0, 0.0, 1.0, 0.0); break;
		case 2: out_Color = vec4 (1.0, 1.0, 0.0, 0.0); break;
		case 3: out_Color = vec4 (0.0, 1.0, 1.0, 0.0); break;
		case 4: out_Color = vec4 (randomRed, randomGreen, randomBlue, 0.0); break;
	}
  }
 