note
	description: "Clase abstracta que implementa un componente."
	author: "Rebeca Bárcena Orero"
	date: "$Date$"
	revision: "$Revision$"

class
	COMPONENTE
	inherit
		HASHABLE
	redefine hash_code end
	create
		componente
		feature
		-- Variables
			-- Nombre del componente
			nombre: STRING

		-- Constructor
			componente
			do
				create nombre.make_empty
			end
        -- Setters, Getters y Funciones
        	-- Get del nombre del componente
        	getNombre: String do Result := nombre end
        	-- Set del nombre del componente
            setNombre (n: STRING) do nombre := n end
            -- Get del tamaño
            getTam: INTEGER do Result := 1 end
            -- Retorna el número de componentes o elementos dentro de
            -- un componente
        	numElem: INTEGER do Result := 1 end

        	hash_code: INTEGER
        	do
			-- Hash code value
				Result := nombre.hash_code
			end
end
