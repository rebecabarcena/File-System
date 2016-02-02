note
	description: "Archivo especial que almacena en su interior elementos del sistema de archivos de manera comprimida."
	author: "Rebeca Bárcena Orero"
	date: "$Date$"
	revision: "$Revision$"

class
	ARCHIVO_COMPRIMIDO inherit
	ENLAZABLE
	redefine numElem, getTam, is_equal end
	create
		archivo_comprimido
	feature
        -- Tamaño del fichero tras la compresión, en %.
		tamanho_compresion: INTEGER = 30
		-- Lista de archivos comprimidos en este archivo comprimido
		comprimidos: DS_HASH_SET[Componente]

        -- Constructor
        archivo_comprimido(nomb: STRING)
        do
        	create nombre.make_from_string(nomb)
        	create comprimidos.make(1)
        end

        -- Retorna el tamaño del archivo comprimido
        getTam: INTEGER
        local
        	i : INTEGER
        	comp : ARRAY[COMPONENTE]
        	tamanho : INTEGER
        	resultado: REAL_64
        do
        	comp := comprimidos.to_array
			tamanho := 0
        	from
        		i := 0
        	until
        		i = comp.count
        	loop
				tamanho := tamanho + comp.at(i).getTam
        	end
        	resultado := (tamanho - tamanho * tamanho_compresion / 100)
        	Result := resultado.truncated_to_integer
        end

        -- Retorna el número de archivos comprimidos en este archivo comprimido
		numElem: INTEGER
		local
			numElements: INTEGER
			i: INTEGER
			comp: ARRAY[COMPONENTE]
		do
			numElements := 1
			comp := comprimidos.to_array
            from
            	i := 0
            until
            	i = comp.count
            loop
            	numElements := numElements + comp.at(i).numElem
            	i := i + 1
            end

            Result := numElements
		end

        -- Añade un archivo al archivo comprimido
        anhade_archivo(c: COMPONENTE)
        do
        	comprimidos.put(c)
        end

        -- Elimina un archivo del archivo comprimido
		elimina_archivo(c: COMPONENTE)
		do
			comprimidos.remove(c)
		end

		-- Método equals que retorna true o false en función
		-- de si el objeto pasado es o no el mismo
		is_equal(other: ARCHIVO_COMPRIMIDO): BOOLEAN
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
