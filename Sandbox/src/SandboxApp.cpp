#include <CodeBase.h>

class Sandbox : public CodeBase::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

CodeBase::Application* CodeBase::CreateApplication() {
	return new Sandbox();
}