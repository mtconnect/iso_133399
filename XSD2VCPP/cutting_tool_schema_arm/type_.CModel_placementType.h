#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CModel_placementType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CModel_placementType



namespace cutting_tool_schema_arm
{

class CModel_placementType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CModel_placementType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CModel_placementType(CModel_placementType const& init);
	void operator=(CModel_placementType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CModel_placementType); }
	MemberElement<CTransformation, _altova_mi_altova_CModel_placementType_altova_Transformation> Transformation;
	struct Transformation { typedef Iterator<CTransformation> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CModel_placementType
