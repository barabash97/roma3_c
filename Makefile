.PHONY: clean All

All:
	@echo "----------Building project:[ massimo_e_somma - Debug ]----------"
	@cd "massimo_e_somma" && "$(MAKE)" -f  "massimo_e_somma.mk"
clean:
	@echo "----------Cleaning project:[ massimo_e_somma - Debug ]----------"
	@cd "massimo_e_somma" && "$(MAKE)" -f  "massimo_e_somma.mk" clean
