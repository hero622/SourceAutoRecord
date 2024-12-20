#pragma once

#include "Hud.hpp"

#include <vector>

class ToastHud : public Hud {
public:
	ToastHud();
	bool ShouldDraw() override;
	bool GetCurrentSize(int &xSize, int &ySize) override;
	void AddToast(std::string tag, std::string text, bool doConsole = true);
	void Update();
	void Paint(int slot) override;
	void Announce(std::string text, int durationMs = 5000);
};

extern ToastHud toastHud;
