workspace "ChitChit"
	architecture "x64"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}
outputdir ="%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
project "ChitChit"
	location "ChitChit"
	kind "ShareLib"
	language "c++"

	targetdir  ("bin/" .. outputdir .."/%{prj.name}")
	objdir  ("bin-int/" .. outputdir .."/%{prj.name}")
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	includedirs
	{
		"%{prj.name}/vendor/spdlog/include"
	}
	filter "system:windows"
		cppdialect "c++17"
		staticruntime "On"
		systemversion "10.0"
		defines
		{
			"CHITCHIT_BUILD_DLL",
			"CHITCHIT_PLATFORM_WINDOW",
			"_WINDLL"
		}
		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath}../bin/" .. outputdir .. "/Sandbox")
		}
	filter "configurations:Debug"
		define "CHITCHIT_DEBUG"
		symbols "On"
	filter "configurations:Release"
		define "CHITCHIT_RELEASE"
		symbols "On"
	filter "configurations:Dist"
		define "CHITCHIT_DIST"
		symbols "On"
project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"

	language "c++"
	targetdir  ("bin/" .. outputdir .."/%{prj.name}")
	objdir  ("bin-int/" .. outputdir .."/%{prj.name}")
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	includedirs
	{
		"%{prj.name}/vendor/spdlog/include",
		"ChitChit/src"

	}
	links
	{
		"ChitChit"
	}
	filter "system:windows"
		cppdialect "c++17"
		staticruntime "On"
		systemversion "10.0"
		defines
		{
			
			"CHITCHIT_PLATFORM_WINDOW",
			
		}		
	filter "configurations:Debug"
		define "CHITCHIT_DEBUG"
		symbols "On"
	filter "configurations:Release"
		define "CHITCHIT_RELEASE"
		symbols "On"
	filter "configurations:Dist"
		define "CHITCHIT_DIST"
		symbols "On"


