#include <CodeBase.h>

class ExampleLayer : public CodeBase::Layer
{
public:
	ExampleLayer() : Layer("Example") { }

	void OnUpdate() override
	{
		CB_INFO("ExampleLayer::Update");
	}

	void OnEvent(CodeBase::Event& event) override
	{
		CB_TRACE("{0}", event);
	}

};

class Sandbox : public CodeBase::Application {
public:
	Sandbox() {
		PushLayer(new ExampleLayer());
		PushOverlay(new CodeBase::ImGuiLayer());
	}
	~Sandbox() {

	}
};

CodeBase::Application* CodeBase::CreateApplication() {
	return new Sandbox();
}