note
	description: "Elemento que permite ir directamente desde el lugar donde se encuentra hasta otro elemento del sistema de archivos."
	author: "Rebeca Bárcena Orero"
	date: "$Date$"
	revision: "$Revision$"

class
	ENLACE_DIRECTO
	inherit COMPONENTE
	redefine numElem, getTam, is_equal end
	create
		enlace_directo
	feature
        -- Tamaño del fichero.
		tamanhoFich: INTEGER = 1
		-- Referencia al elemento al que permite ir
		elementoDestino: ENLAZABLE

		-- Constructor
        enlace_directo(elemento: ENLAZABLE)
        do
        	elementoDestino := elemento
        	nombre := elemento.getNombre
        end

        -- Retorna el tamanho
        getTam: INTEGER
        do
        	Result := tamanhoFich
        end

        -- Retorna el número de archivos
		numElem: INTEGER
		do
			Result := tamanhoFich
		end

		-- Get del elemento
        getElemento: ENLAZABLE do Result := elementoDestino end
        -- Set del elemento
        setElemento (c: ENLAZABLE) do elementoDestino := c end

        -- Método equals que retorna true o false en función
		-- de si el objeto pasado es o no el mismo
		is_equal(other: ENLACE_DIRECTO): BOOLEAN
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
