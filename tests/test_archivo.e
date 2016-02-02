note
	description: "Clase probadora de la clase Archivo"
	author: "Rebeca Bárcena Orero"
	date: "enero 2016"
	revision: "1.0"
	testing: "type/manual"

class
	TEST_ARCHIVO

inherit
	EQA_TEST_SET

feature -- Test routines

	TEST_ARCHIVO
		local
			a: ARCHIVO
		do
			create a.archivo("foto.jpg", 10)
			assert ("a.numElem=1", true)
			assert ("a.getTam=10", true)
		end

end


