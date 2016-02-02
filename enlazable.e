note
	description: "Clase que implementa los componentes que pueden ser enlazados mediante un enlace directo."
	author: "Rebeca Bárcena Orero"
	date: "$Date$"
	revision: "$Revision$"

class
	ENLAZABLE
	inherit COMPONENTE
	create
		enlazable

	feature
		-- Constructor
		enlazable
		do
			create nombre.make_empty
		end
end
