##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Assignment2v2
ConfigurationName      :=Debug
WorkspacePath          :="D:/c++ projects/ProgrammingAssignments"
ProjectPath            :="D:/c++ projects/ProgrammingAssignments/Assignment2v2"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Hussein Okasha
Date                   :=30/11/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="C:/Users/Hussein Okasha/Downloads/mingw64/bin/g++.exe"
SharedObjectLinkerName :="C:/Users/Hussein Okasha/Downloads/mingw64/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Assignment2v2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Users/Hussein Okasha/Downloads/mingw64/bin/windres.exe"
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Users/Hussein Okasha/Downloads/mingw64/bin/ar.exe" rcu
CXX      := "C:/Users/Hussein Okasha/Downloads/mingw64/bin/g++.exe"
CC       := "C:/Users/Hussein Okasha/Downloads/mingw64/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Users/Hussein Okasha/Downloads/mingw64/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Player.cpp$(ObjectSuffix) $(IntermediateDirectory)/Admin.cpp$(ObjectSuffix) $(IntermediateDirectory)/Complete.cpp$(ObjectSuffix) $(IntermediateDirectory)/MCQ.cpp$(ObjectSuffix) $(IntermediateDirectory)/User.cpp$(ObjectSuffix) $(IntermediateDirectory)/TrueOrFalse.cpp$(ObjectSuffix) $(IntermediateDirectory)/Question.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++ projects/ProgrammingAssignments/Assignment2v2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Player.cpp$(ObjectSuffix): Player.cpp $(IntermediateDirectory)/Player.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++ projects/ProgrammingAssignments/Assignment2v2/Player.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Player.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Player.cpp$(DependSuffix): Player.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Player.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Player.cpp$(DependSuffix) -MM Player.cpp

$(IntermediateDirectory)/Player.cpp$(PreprocessSuffix): Player.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Player.cpp$(PreprocessSuffix) Player.cpp

$(IntermediateDirectory)/Admin.cpp$(ObjectSuffix): Admin.cpp $(IntermediateDirectory)/Admin.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++ projects/ProgrammingAssignments/Assignment2v2/Admin.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Admin.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Admin.cpp$(DependSuffix): Admin.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Admin.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Admin.cpp$(DependSuffix) -MM Admin.cpp

$(IntermediateDirectory)/Admin.cpp$(PreprocessSuffix): Admin.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Admin.cpp$(PreprocessSuffix) Admin.cpp

$(IntermediateDirectory)/Complete.cpp$(ObjectSuffix): Complete.cpp $(IntermediateDirectory)/Complete.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++ projects/ProgrammingAssignments/Assignment2v2/Complete.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Complete.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Complete.cpp$(DependSuffix): Complete.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Complete.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Complete.cpp$(DependSuffix) -MM Complete.cpp

$(IntermediateDirectory)/Complete.cpp$(PreprocessSuffix): Complete.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Complete.cpp$(PreprocessSuffix) Complete.cpp

$(IntermediateDirectory)/MCQ.cpp$(ObjectSuffix): MCQ.cpp $(IntermediateDirectory)/MCQ.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++ projects/ProgrammingAssignments/Assignment2v2/MCQ.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MCQ.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MCQ.cpp$(DependSuffix): MCQ.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MCQ.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MCQ.cpp$(DependSuffix) -MM MCQ.cpp

$(IntermediateDirectory)/MCQ.cpp$(PreprocessSuffix): MCQ.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MCQ.cpp$(PreprocessSuffix) MCQ.cpp

$(IntermediateDirectory)/User.cpp$(ObjectSuffix): User.cpp $(IntermediateDirectory)/User.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++ projects/ProgrammingAssignments/Assignment2v2/User.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/User.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/User.cpp$(DependSuffix): User.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/User.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/User.cpp$(DependSuffix) -MM User.cpp

$(IntermediateDirectory)/User.cpp$(PreprocessSuffix): User.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/User.cpp$(PreprocessSuffix) User.cpp

$(IntermediateDirectory)/TrueOrFalse.cpp$(ObjectSuffix): TrueOrFalse.cpp $(IntermediateDirectory)/TrueOrFalse.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++ projects/ProgrammingAssignments/Assignment2v2/TrueOrFalse.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TrueOrFalse.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TrueOrFalse.cpp$(DependSuffix): TrueOrFalse.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TrueOrFalse.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TrueOrFalse.cpp$(DependSuffix) -MM TrueOrFalse.cpp

$(IntermediateDirectory)/TrueOrFalse.cpp$(PreprocessSuffix): TrueOrFalse.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TrueOrFalse.cpp$(PreprocessSuffix) TrueOrFalse.cpp

$(IntermediateDirectory)/Question.cpp$(ObjectSuffix): Question.cpp $(IntermediateDirectory)/Question.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/c++ projects/ProgrammingAssignments/Assignment2v2/Question.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Question.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Question.cpp$(DependSuffix): Question.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Question.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Question.cpp$(DependSuffix) -MM Question.cpp

$(IntermediateDirectory)/Question.cpp$(PreprocessSuffix): Question.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Question.cpp$(PreprocessSuffix) Question.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


