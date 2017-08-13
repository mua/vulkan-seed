#include "WSIWindow.h"
#include "CDevices.h"
#include "vulkan/vulkan.hpp"

class MyWindow : public WSIWindow {

	void OnMouseEvent(eAction action, int16_t x, int16_t y, uint8_t btn) {

	}
	void OnTouchEvent(eAction action, float x, float y, uint8_t id) {

	}
	void OnKeyEvent(eAction action, eKeycode keycode) {

	}
	void OnTextEvent(const char *str) {

	}
	void OnMoveEvent(int16_t x, int16_t y) {

	}
	void OnFocusEvent(bool hasFocus) {

	}
	void OnResizeEvent(uint16_t width, uint16_t height) {

	}
	void OnCloseEvent() {

	}
};

int main(int argc, char *argv[]) {
	CInstance instance;
	MyWindow window;
	window.SetTitle("Vulkan Seed");
	window.SetWinSize(1280, 720);
	window.SetWinPos(0, 0);
	VkSurfaceKHR surface = window.GetSurface(instance);

	CPhysicalDevices gpus(instance);
	CPhysicalDevice *gpu = gpus.FindPresentable(surface);
	CDevice device(*gpu);
	CQueue* queue = device.AddQueue(VK_QUEUE_GRAPHICS_BIT, surface);

	while (window.ProcessEvents()) {

	}
	return 0;
}
