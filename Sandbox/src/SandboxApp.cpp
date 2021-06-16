#include <CodeBase.h>

//#include "imgui/imgui.h"

class ExampleLayer : public CodeBase::Layer
{
public:
	ExampleLayer() : Layer("Example") { }

	void OnUpdate() override
	{
		//if (CodeBase::Input::IsKeyPressed(CB_KEY_ESCAPE)) { // poll
		//	CB_TRACE("Escape!");
		//}
	}

	virtual void OnImGuiRender() override {
		//ImGui::Begin("Test");
		//ImGui::Text("Hello World");
		//ImGui::End();
	}

	void OnEvent(CodeBase::Event& event) override
	{
		// CB_TRACE("{0}", event);
		if (event.GetEventType() == CodeBase::EventType::KeyPressed) {
			if (((CodeBase::KeyPressedEvent&)event).GetKeyCode() == CB_KEY_ESCAPE) {
				CB_TRACE("Escape!");
			}
		}
	}

};

class Sandbox : public CodeBase::Application {
public:
	Sandbox() {
		PushLayer(new ExampleLayer());
	}
	~Sandbox() {

	}
};

CodeBase::Application* CodeBase::CreateApplication() {
	return new Sandbox();
}