#pragma once

#ifdef CB_PLATFORM_WINDOWS

extern CodeBase::Application* CodeBase::CreateApplication();

int main(int argc, char** argv) {
	CodeBase::Log::Init();
	CB_CORE_INFO("Initialized Log!");
	int x = 3;
	CB_INFO("Initialized Log! x={0}", x);

	auto app = CodeBase::CreateApplication();
	app->Run();
	delete app;
}

#endif