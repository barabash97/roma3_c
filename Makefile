.PHONY: clean All

All:
	@echo "----------Building project:[ rettangolo_base_altezza - Debug ]----------"
	@cd "albero_base_altezza" && "$(MAKE)" -f  "rettangolo_base_altezza.mk"
clean:
	@echo "----------Cleaning project:[ rettangolo_base_altezza - Debug ]----------"
	@cd "albero_base_altezza" && "$(MAKE)" -f  "rettangolo_base_altezza.mk" clean
