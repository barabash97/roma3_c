.PHONY: clean All

All:
	@echo "----------Building project:[ media_istruzioni_ripetitive_2 - Debug ]----------"
	@cd "media_istruzioni_ripetitive_2" && "$(MAKE)" -f  "media_istruzioni_ripetitive_2.mk"
clean:
	@echo "----------Cleaning project:[ media_istruzioni_ripetitive_2 - Debug ]----------"
	@cd "media_istruzioni_ripetitive_2" && "$(MAKE)" -f  "media_istruzioni_ripetitive_2.mk" clean
