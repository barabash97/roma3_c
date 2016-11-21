.PHONY: clean All

All:
	@echo "----------Building project:[ isPrimo - Debug ]----------"
	@cd "isPrimo" && "$(MAKE)" -f  "isPrimo.mk"
clean:
	@echo "----------Cleaning project:[ isPrimo - Debug ]----------"
	@cd "isPrimo" && "$(MAKE)" -f  "isPrimo.mk" clean
