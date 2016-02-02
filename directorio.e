note
	description: "Contenedor de archivos u otros elementos que pueda alojar el sistema de archivos, sirviendo para organizar y estructurar el sistema de manera que sea m�s f�cil la localizaci�n de la informaci�n, de acuerdo al criterio de cada usuario."
	author: "Rebeca B�rcena Orero"
	date: "$Date$"
	revision: "$Revision$"

class
	DIRECTORIO inherit
	ENLAZABLE
	redefine numElem, getTam, is_equal end
    create
   		directorio
    feature
		-- Tama�o que ocupa un directorio s�lo por su definici�n
		definicion: INTEGER
        -- Archivos almacenados en el directorio
        contenidos: DS_HASH_SET [COMPONENTE]

		-- Constructor
        directorio(nomb: STRING)
        do
			create nombre.make_from_string(nomb)
        	create definicion.make_from_reference (1)
        	create contenidos.make (1)
        end

		-- Retorna el tamanho
		getTam: INTEGER
		local
        	i : INTEGER
        	cont : ARRAY[COMPONENTE]
        	tamanho : INTEGER
        do
        	cont := contenidos.to_array
			tamanho := 0
        	from
        		i := 0
        	until
        		i = cont.count
        	loop
				tamanho := tamanho + cont.at(i).getTam
        	end
        	Result := tamanho + definicion
		end

        -- Retorna el n�mero de archivos comprimidos en este directorio
		numElem: INTEGER
		local
			numElements: INTEGER
			i: INTEGER
			conten: ARRAY[COMPONENTE]
		do
			numElements := 1
			conten := contenidos.to_array
            from
            	i := 0
            until
            	i = conten.count
            loop
            	numElements := numElements + conten.at(i).numElem
            	i := i + 1
            end

            Result := numElements
		end

        -- A�ade un componente al directorio
        anhadeElemento(c: COMPONENTE)
        do
        	contenidos.put (c)
        end

        -- Elimina un componente del directorio
        eliminaElemento(c: COMPONENTE)
        do
        	contenidos.remove (c)
        end

		-- M�todo equals que retorna true o false en funci�n
		-- de si el objeto pasado es o no el mismo
		is_equal(other: DIRECTORIO): BOOLEAN
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
