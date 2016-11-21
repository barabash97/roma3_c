.PHONY: clean All

All:
	@echo "----------Building project:[ isQuaCplus - Debug ]----------"
	@cd "isQuaCplus" && "$(MAKE)" -f  "isQuaCplus.mk"
clean:
	@echo "----------Cleaning project:[ isQuaCplus - Debug ]----------"
	@cd "isQuaCplus" && "$(MAKE)" -f  "isQuaCplus.mk" clean
