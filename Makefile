.PHONY: clean All

All:
	@echo "----------Building project:[ due_estremi_stampare_interi_non_div_per_3 - Debug ]----------"
	@cd "due_estremi_stampare_interi_non_div_per_3" && "$(MAKE)" -f  "due_estremi_stampare_interi_non_div_per_3.mk"
clean:
	@echo "----------Cleaning project:[ due_estremi_stampare_interi_non_div_per_3 - Debug ]----------"
	@cd "due_estremi_stampare_interi_non_div_per_3" && "$(MAKE)" -f  "due_estremi_stampare_interi_non_div_per_3.mk" clean
