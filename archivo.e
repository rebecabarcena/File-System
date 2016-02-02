note
	description: "Elemento básico del sistema de archivos. Se corresponde con documentos, fotografías u otros elementos que se deseen almacenar en el sistema de ficheros."
	author: "Rebeca Bárcena Orero"
	date: "$Date$"
	revision: "$Revision$"

class
	ARCHIVO inherit
	ENLAZABLE
    redefine numElem, getTam, is_equal end
    create
    	archivo
    feature
    	tamanho: INTEGER
    	-- Constructor
    	archivo(nomb: STRING; tam: INTEGER)
    	do
    		create nombre.make_from_string(nomb)
    		create tamanho.make_from_reference(tam)
    	end

		-- Retorna el tamaño
		getTam: INTEGER
		do
			Result := tamanho
		end

    	-- Retorna el número de elementos
    	numElem: INTEGER
    	do
    		Result := 1
    	end

    	-- Método equals que retorna true o false en función
		-- de si el objeto pasado es o no el mismo
		is_equal(other: ARCHIVO): BOOLEAN
		local
			resultado: BOOLEAN
		do
			if other /= void AND other.getnombre.is_equal (nombre) then
				resultado := true
			else
				resultado := false
			end
			Result := resultado
		end
end
